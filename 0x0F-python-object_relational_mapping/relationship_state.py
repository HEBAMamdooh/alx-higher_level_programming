#!/usr/bin/python3
"""15-City relationship"""
from lib2to3.pytree import Base
from sre_parse import State
from unicodedata import name
from sqlalchemy import Column, Integer, String, MetaData
from sqlalchemy.orm import relationship
from sqlalchemy.ext.declarative import declarative_base
from relationship_city import Base, City

mymetadata = MetaData()
Base = declarative_base(metadata=mymetadata)

class State(Base):
    """state-relation-class"""
    __tablename__ = "states"
    id = Column(Integer, unique=True, nullable=False, primary_key=True)
    name = Column(String(128), nullable=False)

    cities = relationship("City", back_populates="state",
                          cascade="all, delete-orphan")

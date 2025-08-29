package com.example.Tasky.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import com.example.Tasky.model.Todo;
import org.springframework.stereotype.Repository;

@Repository
public interface TodoRepository extends JpaRepository<Todo, Long> {
}

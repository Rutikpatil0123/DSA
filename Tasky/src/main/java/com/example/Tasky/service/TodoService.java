package com.example.Tasky.service;

import com.example.Tasky.model.Todo;
import com.example.Tasky.repository.TodoRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class TodoService {

    private final TodoRepository repository;

    public TodoService(TodoRepository repository){
        this.repository = repository;
    }

    public List<Todo> findAll(){
        return repository.findAll();
    }
/*
   public Todo updateTodo(Long id, Todo updatedTodo) {
        return repository.findById(id).map(todo -> {
            todo.setTitle(updatedTodo.getTitle());
            todo.setCompleted(updatedTodo.isCompleted());
            return repository.save(todo);
        }).orElseThrow(() -> new RuntimeException("Todo not found"));
    }
*/

    public Todo save(Todo todo) {
        return repository.save(todo);
    }

    public void delete(Long id){
        repository.deleteById(id);
    }


}

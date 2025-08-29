package com.example.Tasky.controller;

import com.example.Tasky.model.Todo;
import com.example.Tasky.service.TodoService;
import jdk.jfr.Registered;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@RequestMapping("/api/todos")
public class TodoController {

    private final TodoService service;

    public TodoController(TodoService service){
        this.service = service;
    }

    @GetMapping
    public List<Todo> getAllTodos(){
        System.out.println("Fetching the todos");
        return service.findAll();
    }

    @PostMapping
    public Todo CreateTodo( @RequestBody Todo todo){
        return service.save(todo);
    }

   /* @PutMapping("/{id}")
    public Todo updateTodo(@PathVariable Long id, @RequestBody Todo todo){
        return service.update(id, todo);
    }*/

    @DeleteMapping("/{id}")
    public void deleteTodo(@PathVariable Long id){
        System.out.println("Todo delete");
        service.delete(id);
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoky-fa <rtoky-fa@student.42antananarivo.m+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 03:41:48 by rtoky-fa          #+#    #+#             */
/*   Updated: 2026/06/19 00:54:15 by rtoky-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {

  // TEST 1: Array of animals (half Dog, half Cat)
  {
    std::cout << "\n===== TEST 1: ARRAY OF ANIMALS =====" << std::endl;
    const int size = 10;
    const Animal *animals[size];

    std::cout << "\n------ Creation ------" << std::endl;
    for (int i = 0; i < size; i++) {
      if (i < size / 2)
        animals[i] = new Dog();
      else
        animals[i] = new Cat();
      std::cout << std::endl;
    }

    std::cout << "-------- Make sounds ---------" << std::endl;
    for (int i = 0; i < size; i++) {
      std::cout << animals[i]->getType() << ": ";
      animals[i]->makeSound();
    }

    std::cout << "\n-------- Deleting array ----------" << std::endl;
    for (int i = 0; i < size; i++) {
      delete animals[i];
      std::cout << std::endl;
    }
  }

  // TEST 2: Deep copy Dog (copy constructor)
  {
    std::cout << "\n===== TEST 2: DEEP COPY DOG (copy constructor) ====="
              << std::endl;
    Dog original;
    original.getBrain()->setIdea(0, "I want to chase squirrels");
    original.getBrain()->setIdea(1, "I love bones");
    original.getBrain()->setIdea(2, "Where is my ball?");

    std::cout << "\n--- Copying Dog ---" << std::endl;
    Dog copy(original);

    std::cout << "\n[Before modification]" << std::endl;
    std::cout << "Original idea[0]: " << original.getBrain()->getIdea(0)
              << std::endl;
    std::cout << "Copy     idea[0]: " << copy.getBrain()->getIdea(0)
              << std::endl;

    // Modifying the copy should NOT affect the original
    copy.getBrain()->setIdea(0, "I want to sleep all day");

    std::cout << "\n[After modifying the copy]" << std::endl;
    std::cout << "Original idea[0]: " << original.getBrain()->getIdea(0)
              << std::endl;
    std::cout << "Copy     idea[0]: " << copy.getBrain()->getIdea(0)
              << std::endl;
    std::cout << "(Both must be different = deep copy OK)" << std::endl;
    std::cout << std::endl;
  }

  // TEST 3: Deep copy Cat (assignment operator)
  {
    std::cout << "\n===== TEST 3: DEEP COPY CAT (assignment operator) ====="
              << std::endl;
    Cat cat1;
    cat1.getBrain()->setIdea(0, "I want to catch mice");
    cat1.getBrain()->setIdea(1, "Give me tuna");
    cat1.getBrain()->setIdea(42, "World domination");

    Cat cat2;
    cat2.getBrain()->setIdea(0, "I like yarn");

    std::cout << "\n--- Assignment cat2 = cat1 ---" << std::endl;
    cat2 = cat1;

    std::cout << "\n[After assignment]" << std::endl;
    std::cout << "cat1 idea[0] : " << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << "cat2 idea[0] : " << cat2.getBrain()->getIdea(0) << std::endl;
    std::cout << "cat2 idea[42]: " << cat2.getBrain()->getIdea(42) << std::endl;

    // Modifying cat1 should NOT affect cat2
    cat1.getBrain()->setIdea(0, "Changed after assignment");

    std::cout << "\n[After modifying cat1]" << std::endl;
    std::cout << "cat1 idea[0]: " << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << "cat2 idea[0]: " << cat2.getBrain()->getIdea(0) << std::endl;
    std::cout << "(Both must be different = deep copy OK)" << std::endl;
    std::cout << std::endl;
  }

  // TEST 4: Deep copy Dog (scope - survival after destruction)
  {
    std::cout << "\n===== TEST 4: DOG SURVIVES AFTER COPY DESTRUCTION ====="
              << std::endl;
    Dog basic;
    basic.getBrain()->setIdea(0, "I am the original dog");
    {
      Dog tmp = basic;
      std::cout << "tmp idea[0]: " << tmp.getBrain()->getIdea(0) << std::endl;
    }
    std::cout << "basic idea[0] after destruction of tmp: "
              << basic.getBrain()->getIdea(0) << std::endl;
    std::cout << "Basic dog still alive after tmp is destroyed!" << std::endl;
    std::cout << std::endl;
  }

  // TEST 5: Direct Brain test
  {
    std::cout << "\n===== TEST 5: DIRECT BRAIN TEST =====" << std::endl;
    Brain b1;
    b1.setIdea(0, "Idea Alpha");
    b1.setIdea(1, "Idea Beta");
    b1.setIdea(99, "Last idea");

    std::cout << "\n--- Copy constructor Brain ---" << std::endl;
    Brain b2(b1);
    std::cout << "b2 idea[0] : " << b2.getIdea(0) << std::endl;
    std::cout << "b2 idea[99]: " << b2.getIdea(99) << std::endl;

    b2.setIdea(0, "Modified in b2");
    std::cout << "\n[After modifying b2]" << std::endl;
    std::cout << "b1 idea[0]: " << b1.getIdea(0) << std::endl;
    std::cout << "b2 idea[0]: " << b2.getIdea(0) << std::endl;

    std::cout << "\n--- Assignment operator Brain ---" << std::endl;
    Brain b3;
    b3 = b1;
    std::cout << "b3 idea[1] : " << b3.getIdea(1) << std::endl;
    std::cout << "b3 idea[99]: " << b3.getIdea(99) << std::endl;
    std::cout << std::endl;
  }

  // TEST 6: Cat copy constructor
  {
    std::cout << "\n===== TEST 6: CAT COPY CONSTRUCTOR =====" << std::endl;
    Cat original;
    original.getBrain()->setIdea(0, "Purring is life");
    original.getBrain()->setIdea(50, "I see a red dot");

    std::cout << "\n--- Copying Cat ---" << std::endl;
    Cat copy(original);
    std::cout << "copy idea[0] : " << copy.getBrain()->getIdea(0) << std::endl;
    std::cout << "copy idea[50]: " << copy.getBrain()->getIdea(50) << std::endl;

    original.getBrain()->setIdea(0, "Changed in original");
    std::cout << "\n[After modifying the original]" << std::endl;
    std::cout << "original idea[0]: " << original.getBrain()->getIdea(0)
              << std::endl;
    std::cout << "copy     idea[0]: " << copy.getBrain()->getIdea(0)
              << std::endl;
    std::cout << "(Deep copy confirmed)" << std::endl;
    std::cout << std::endl;
  }

  return (0);
}
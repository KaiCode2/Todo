# Todo
## A CLI task tracker for Mac OS X!

Todo is a command line app for task tracking for Mac OS X.

### Installation

Installing Todo is easy, simply type one of the below:


Homebrew:

`brew install todo`

apt-get

`apt-get install todo`

 NOTE: this may require root access therefore sudo may be needed.


### Examples

Creating a new task is easy! Simply enter `Todo new "Email Dan"`.

This will create a new task to the bottom of your task queue.
```
>>> Todo new "Email Dan"
"Email Dan" is the #4 item on your list.
```

If we want to see our list of tasks simply call `list`

```
>>> Todo list
#1 "Finish WatchOS App" - Dec 29
#2 "Finish Swift PR"    - Jan 2
#3 "Finish The Office"  - Jan 6
#4 "Email Dan"          - Jan 6
```

Now let's say we write that email to dan. We can now check it off our list like so.

```
>>> Todo done "Email Dan"
🎉Congrats on completing "Email Dan" 🎉
```


Alternatively we could also accomplish the above by referencing it's rank in the queue.

```
>>> Todo done #4
🎉Congrats on completing "Email Dan" 🎉
```

### Docs

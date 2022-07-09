V = ${V}

up:
	docker compose up -d --build

down:
	docker compose down

ex:
	docker compose exec gcc bash

s:
	mkdir ${V} &&\
	cp tmp.cc ${V}/a.cc &&\
	cp tmp.cc ${V}/b.cc &&\
	cp tmp.cc ${V}/c.cc &&\
	cp tmp.cc ${V}/d.cc &&\
	cp tmp.cc ${V}/e.cc &&\
	cp tmp.cc ${V}/f.cc

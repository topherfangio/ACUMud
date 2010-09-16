#makefile for simple programs on unix.

APP_NAME = ACUMud
OBJS = Ability.o AbilityScores.o Area.o AreaInfo.o CharInfo.o Character.o Commands.o Date.o Direction.o Feat.o Gender.o Info.o Item.o Language.o Message.o Name.o Output.o Race.o Room.o Skill.o Spell.o Statistics.o Time.o World.o WorldInfo.o Driver.o
HEADERS = Ability.h AbilityScores.h Area.h AreaInfo.h CharInfo.h Character.h Commands.h Date.h Direction.h Feat.h Gender.h Info.h Item.h Language.h Message.h Name.h Output.h Race.h Room.h Skill.h Spell.h Statistics.h Time.h World.h WorldInfo.h
CPP_FLAGS = -c -Wall
FRAMEWORKS = -framework OpenGL -framework GLUT -framework Foundation

$(APP_NAME): $(OBJS)
	g++ $(OBJS) -o $(APP_NAME)

.c.o :
	g++ $(CPP_FLAGS) $<

.cpp.o :
	g++ $(CPP_FLAGS) $<

explain:
	@echo "APP_NAME == $(APP_NAME)"
	@echo "OBJS == $(OBJS)"
	@echo "CPP_FLAGS == $(CPP_FLAGS)"

clean:
	rm -f $(APP_NAME)
	rm -f *.o

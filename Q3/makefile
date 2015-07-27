include cfg.mak

all: $(DIST)/$(BIN)
	@echo "sources: $(SRCS)"
	@echo "objetos: $(OBJS)"
	@echo compilado!

$(DIST)/$(BIN): $(OBJS)
	@echo compilando...
	@gcc $(OBJS) -o $(DIST)/$(BIN)

$(OBJ)/%.o: $(SRC)/%.c
	@echo compilando $< ...
	@gcc -c $< -I ./$(INC) -o $@
	
clean:
	@echo limpando
	@rm -rf $(OBJ)/*.o
	@rm -rf $(DIST)/$(BIN)

remake: clean all
	@echo feito!
	
//BREAK e CONTINUE permitem manipular as repetições de um loop

//para quando o número for 4
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  cout << i << "\n";
}

//passa para a próxima iteração quando o número for 4
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  cout << i << "\n";
}
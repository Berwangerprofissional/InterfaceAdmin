const pedido = {
    cliente:"Bibi",
    pratos: [],
    total: 0,

    adicionarPrato: function(nome, preco){
        this.pratos.push({nome: nome, preco: preco});
        this.calcularTotal();
    }
};

//1. Criando o objeto 'pedido'
const pedido = {
    cliente: "João Silva", // Nome do cliente
    pratos: [],            // Array para armazenar os pratos pedidos
    total: 0,              // Valor total inicial do pedido

    // 2. Método para adicionar um prato ao pedido
    adicionarPrato: function(nome, preco) {
        this.pratos.push({ nome: nome, preco: preco });
        this.calcularTotal(); // Recalcula o total sempre que um prato é adicionado
    },

    // 3. Método para calcular o total do pedido
    calcularTotal: function() {
        this.total = this.pratos.reduce((soma, prato) => soma + prato.preco, 0);
    },

    // 4. Método para exibir um resumo do pedido
    exibirResumo: function() {
        console.log(`Resumo do Pedido de ${this.cliente}:`);
        this.pratos.forEach((prato, index) => {
            console.log(`${index + 1}. ${prato.nome} - R$${prato.preco.toFixed(2)}`);
        });
        console.log(`Total: R$${this.total.toFixed(2)}`);
    }
};

// 5. Adicionando pratos ao pedido
pedido.adicionarPrato("Pizza Margherita", 35.50);
pedido.adicionarPrato("Coca-Cola 2L", 10.00);
pedido.adicionarPrato("Pudim", 12.00);

// 6. Exibindo o resumo do pedido
pedido.exibirResumo();

import json
import matplotlib.pyplot as plt

def plot_witnessed_convergence(file_path):
    with open(file_path, 'r') as f:
        import re; text = f.read(); steps = re.findall(r"Step (d+): Energy ([d.]+)", text); data = {"trajectory": [{"step": int(s), "energy": float(e)} for s, e in steps]}
    
    steps = [entry['step'] for entry in data['trajectory']]
    energy = [entry['energy'] for entry in data['trajectory']]
    
    plt.figure(figsize=(10, 6))
    plt.plot(steps, energy, label='Witnessed Energy $\mathcal{E}(\Theta_t)$', color='#2ecc71', linewidth=2)
    plt.fill_between(steps, energy, alpha=0.2, color='#2ecc71')
    
    plt.title('FARD v1.0: Witnessed Learning Convergence (Seed 42)')
    plt.xlabel('Step $t$')
    plt.ylabel('Energy $L(\Theta_t)$')
    plt.grid(True, which='both', linestyle='--', alpha=0.5)
    plt.legend()
    
    plt.savefig('convergence_map.png')
    print("Convergence map saved to convergence_map.png")

if __name__ == "__main__":
    import os; plot_witnessed_convergence(os.path.join(os.getcwd(), "receipts.json"))

import sys


def convert_to_markdown(input_file, output_file):
    try:
        with open(input_file, 'r') as infile:
            code = infile.read()

        # Генеруємо Markdown-структуру
        markdown_content = f"```c\n{code}\n```"

        with open(output_file, 'w') as outfile:
            outfile.write(markdown_content)

        print(f"Markdown файл успішно створений: {output_file}")
    except FileNotFoundError:
        print(f"Помилка: файл {input_file} не знайдено.")
    except Exception as e:
        print(f"Помилка: {e}")


if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Використання: python3 script.py <input_file> <output_file>")
    else:
        input_file = sys.argv[1]
        output_file = sys.argv[2]
        convert_to_markdown(input_file, output_file)

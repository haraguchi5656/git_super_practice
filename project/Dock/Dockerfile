# Ruby 2.7をベースにしています
FROM ruby:2.7

# 作業ディレクトリを/var/wwwに設定しています
WORKDIR /var/www

# ./srcディレクトリを/var/wwwにコピーしています
COPY ./src /var/www/

# bundleの設定をローカルに保存し、vendor/bundleにインストールしています
RUN bundle config --local set path 'vendor/bundle'
RUN bundle install

# コンテナが起動した際に/bin/bashを実行します
# 一度これで実行し、RUN に記載する内容をシミュ・決定する
# CMD ["/bin/bash"]
CMD ["bundle", "exec", "ruby", "app.rb"]
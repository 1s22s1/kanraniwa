json.extract! user, :id, :name, :year, :created_at, :updated_at
json.url user_url(user, format: :json)

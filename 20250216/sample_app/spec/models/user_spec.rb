require 'rails_helper'

RSpec.describe User, type: :model do
  describe '#create' do
    it { expect { User.create }.to change { User.count }.from(0).to(1) }
  end
end

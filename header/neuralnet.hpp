#ifndef NEURALNET_HPP_
#define NEURALNET_HPP_

class neuralnet {
  private:
    std::vector<std::size_t> layers_;
    std::vector<std::vector<float>> neurons_;
    std::vector<std::vector<float>> connect_;

    template <typename T> inline T relu (T threshold, T input) {
      if(input - threshold <= 0) return 0;
      else return input - threshold;
    }
    /*
    void init(std::vector<std::size_t> layers){
      debug(layers);
      layers_ = layers;
      neurons_.resize(layers.size());
      for(std::size_t layerIdx=0; layerIdx<layers.size(); ++layerIdx) {
        neurons_.resize(layers[layerIdx]);
      }
      connect_.resize(layers.size());
      for(std::size_t layerIdx=0; layerIdx<layers.size(); ++layerIdx) {
        connect_.resize(layers[layerIdx]);
      }
    }
    */

  public:
    neuralnet() = default;
    neuralnet(std::size_t layer) : layers_(layer) , neurons_(layer) , connect_(layer) {}
    neuralnet(std::vector<std::size_t> layers) : layers_{layers} {
//      init(layers);
//      layers_ = layers;
      neurons_.resize(layers.size());
      for(std::size_t layerIdx=0; layerIdx<layers.size(); ++layerIdx) {
        neurons_.resize(layers[layerIdx]);
      }
      connect_.resize(layers.size());
      for(std::size_t layerIdx=0; layerIdx<layers.size(); ++layerIdx) {
        connect_.resize(layers[layerIdx]);
      }
    }



//    neuralnet(std::vector<std::size_t> layers) : layers_{layers}
//                                  , neurons_(layers)
//                                  , connect_(layers) {}
//  {}


//    dataset() : imgs_(0), unique_rows_{0}, unique_cols_{0} {}
//    dataset(std::size_t size) : imgs_(size), unique_rows_{0}, unique_cols_{0} {}

    inline void setLayers (std::vector<std::size_t> layers) {
      layers_ = layers;
    }
    inline std::vector<std::size_t> getLayers () { return layers_; }
//    auto size() const noexcept { return imgs_.size(); }
//    auto& operator()(std::size_t i) { return imgs_.at(i); }
//    const auto& operator()(std::size_t i) const { return imgs_.at(i); }
//    auto rows() const noexcept { return unique_rows_; }
//    auto cols() const noexcept { return unique_cols_; }
//    inline int ans (size_t idx) { return ans_[idx]; }
//    void load (std::filesystem::path dataset_path) ;
};

#endif

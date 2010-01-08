#ifndef IGLOO_UNARYNODE_H
#define IGLOO_UNARYNODE_H


namespace igloo {

  template <typename ExpressionItemType>
  class UnaryNode : public ConstraintOperations<ExpressionItemType>
  {
  public:
    explicit UnaryNode(boost::shared_ptr<ExpressionItemType> expressionItem) : ConstraintOperations<ExpressionItemType>(expressionItem) {}
  };

}

#endif

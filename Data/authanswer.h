#ifndef AUTHANSWER_H
#define AUTHANSWER_H

#include "basedata.h"

class AuthAnswer : public BaseData
{
public:
    AuthAnswer(bool answer);
    AuthAnswer() = default;

    virtual QDataStream& toStream(QDataStream &stream) const override;
    virtual QDataStream& fromStream(QDataStream &stream) override;
    virtual size_t size() const override;
    virtual DataType type() const override;

    /* returns true on successful authentication */
    bool isSigned() const;
    void setSigned(bool answer);

private:
    bool answer;
};

#endif // AUTHANSWER_H

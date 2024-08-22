// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGEXPRESSIONISALMOSTNEUTRALFILTER_H
#define VGEXPRESSIONISALMOSTNEUTRALFILTER_H



#import "VGExpressionFilter.h"

@interface VGExpressionIsAlmostNeutralFilter : VGExpressionFilter {
    float _lowerBound;
    float _upperBound;
}




-(float)filter:(id)arg0 ;
-(id)initWithLowerBound:(float)arg0 withUpperBound:(float)arg1 ;


@end


#endif
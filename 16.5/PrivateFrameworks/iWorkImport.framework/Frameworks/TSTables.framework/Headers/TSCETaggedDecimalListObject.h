// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCETAGGEDDECIMALLISTOBJECT_H
#define TSCETAGGEDDECIMALLISTOBJECT_H


#import <Foundation/Foundation.h>


@interface TSCETaggedDecimalListObject : NSObject {
    TSCETaggedDecimalList _taggedList;
}




+(id)createFromVector:(struct TSCEGrid *)arg0 functionSpec:(id)arg1 argumentIndex:(int)arg2 evaluationContext:(struct TSCEEvaluationContext *)arg3 ignoreError:(BOOL)arg4 ignoreDuplicates:(BOOL)arg5 ;
-(*void)taggedDecimalList;


@end


#endif
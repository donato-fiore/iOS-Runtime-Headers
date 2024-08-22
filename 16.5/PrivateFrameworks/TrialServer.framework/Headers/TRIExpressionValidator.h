// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIEXPRESSIONVALIDATOR_H
#define TRIEXPRESSIONVALIDATOR_H


#import <Foundation/Foundation.h>


@interface TRIExpressionValidator : NSObject



-(BOOL)_validSystemCovariateFunction:(id)arg0 ;
-(BOOL)_validUserCovariateFunction:(id)arg0 ;
-(BOOL)validateExpression:(id)arg0 outError:(*id)arg1 ;
-(BOOL)validatePredicate:(id)arg0 outError:(*id)arg1 ;
-(id)_validationErrorWithDetails:(id)arg0 ;


@end


#endif
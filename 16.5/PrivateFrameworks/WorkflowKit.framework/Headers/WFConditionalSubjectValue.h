// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONDITIONALSUBJECTVALUE_H
#define WFCONDITIONALSUBJECTVALUE_H

@class WFContentCollection;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFConditionalSubjectValue : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isCaseInsensitive) BOOL caseInsensitive; // ivar: _caseInsensitive
@property (readonly, nonatomic) NSUInteger comparableTimeUnits; // ivar: _comparableTimeUnits
@property (readonly, nonatomic) WFContentCollection *content; // ivar: _content
@property (readonly, nonatomic) NSInteger contentType; // ivar: _contentType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContent:(id)arg0 contentType:(NSInteger)arg1 caseInsensitive:(BOOL)arg2 comparableTimeUnits:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
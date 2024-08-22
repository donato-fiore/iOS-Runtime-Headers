// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCHOOSEFROMMENUITEM_H
#define WFCHOOSEFROMMENUITEM_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFChooseFromMenuItem : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSArray *synonyms; // ivar: _synonyms


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 synonyms:(id)arg1 subtitle:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
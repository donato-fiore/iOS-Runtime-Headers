// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLISTDISPLAYCONFIGURATION_H
#define WFLISTDISPLAYCONFIGURATION_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFListDisplayConfiguration : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *titleLineLimit; // ivar: _titleLineLimit


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
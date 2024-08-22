// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWIDGETCONFIGURATIONRESPONSE_H
#define WFWIDGETCONFIGURATIONRESPONSE_H

@class INIntent;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFWidgetConfigurationResponse : NSObject <NSSecureCoding>



@property (readonly, nonatomic) INIntent *intent; // ivar: _intent


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
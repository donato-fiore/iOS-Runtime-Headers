// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFUIKITPARAMETEREDITINGRESPONSE_H
#define WFUIKITPARAMETEREDITINGRESPONSE_H

@protocol NSSecureCoding, WFParameterState;

#import <Foundation/Foundation.h>


@interface WFUIKitParameterEditingResponse : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSObject<WFParameterState> *parameterState; // ivar: _parameterState


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParameterState:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
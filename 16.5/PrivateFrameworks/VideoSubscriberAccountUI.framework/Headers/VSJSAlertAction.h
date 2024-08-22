// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSJSALERTACTION_H
#define VSJSALERTACTION_H

@class IKJSObject, JSValue, NSString;
@protocol VSJSAlertAction;



@interface VSJSAlertAction : IKJSObject <VSJSAlertAction>



@property (retain, nonatomic) JSValue *callback; // ivar: _callback
@property (copy, nonatomic) NSString *style; // ivar: _style
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)init;


@end


#endif
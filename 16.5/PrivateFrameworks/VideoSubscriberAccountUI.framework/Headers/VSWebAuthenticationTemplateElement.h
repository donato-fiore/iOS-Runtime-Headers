// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSWEBAUTHENTICATIONTEMPLATEELEMENT_H
#define VSWEBAUTHENTICATIONTEMPLATEELEMENT_H

@class IKViewElement;


#import "VSMessagePortFeature.h"

@interface VSWebAuthenticationTemplateElement : IKViewElement

@property (readonly, nonatomic) VSMessagePortFeature *messagePort; // ivar: _messagePort


+(id)supportedFeatures;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif
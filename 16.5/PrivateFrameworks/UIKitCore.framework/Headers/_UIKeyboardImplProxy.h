// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKEYBOARDIMPLPROXY_H
#define _UIKEYBOARDIMPLPROXY_H

@class NSString;
@protocol TIKeyboardInputManagerToImplProtocol;

#import <Foundation/Foundation.h>


@interface _UIKeyboardImplProxy : NSObject <TIKeyboardInputManagerToImplProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TIKeyboardInputManagerToImplProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)processPayloadInfo:(id)arg0 ;
-(void)pushAutocorrections:(id)arg0 requestToken:(id)arg1 ;


@end


#endif
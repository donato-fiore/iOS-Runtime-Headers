// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBAVAUDIOSESSIONAVAILABLEINPUTSLISTENER_H
#define WEBAVAUDIOSESSIONAVAILABLEINPUTSLISTENER_H


#import <Foundation/Foundation.h>


@interface WebAVAudioSessionAvailableInputsListener : NSObject {
    *void _callback;
}




-(id)initWithCallback:(*void)arg0 audioSession:(id)arg1 ;
-(void)invalidate;
-(void)routeDidChange:(id)arg0 ;


@end


#endif
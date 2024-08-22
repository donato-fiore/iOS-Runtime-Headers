// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBAVSAMPLEBUFFERSTATUSCHANGELISTENER_H
#define WEBAVSAMPLEBUFFERSTATUSCHANGELISTENER_H


#import <Foundation/Foundation.h>


@interface WebAVSampleBufferStatusChangeListener : NSObject {
    WeakPtr<WebCore::LocalSampleBufferDisplayLayer, WTF::DefaultWeakPtrImpl> _parent;
}




-(id)initWithParent:(*void)arg0 ;
-(void)begin;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)stop;


@end


#endif
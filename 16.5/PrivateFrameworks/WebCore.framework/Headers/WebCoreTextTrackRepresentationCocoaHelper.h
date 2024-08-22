// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBCORETEXTTRACKREPRESENTATIONCOCOAHELPER_H
#define WEBCORETEXTTRACKREPRESENTATIONCOCOAHELPER_H

@class NSString;
@protocol CALayerDelegate;

#import <Foundation/Foundation.h>


@interface WebCoreTextTrackRepresentationCocoaHelper : NSObject <CALayerDelegate>

 {
    *void _parent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property *void parent;
@property (readonly) Class superclass;


-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)initWithParent:(*void)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif
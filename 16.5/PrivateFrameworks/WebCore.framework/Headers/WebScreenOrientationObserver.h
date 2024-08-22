// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBSCREENORIENTATIONOBSERVER_H
#define WEBSCREENORIENTATIONOBSERVER_H


#import <Foundation/Foundation.h>


@interface WebScreenOrientationObserver : NSObject

@property (nonatomic) *void provider; // ivar: _provider


-(id)initWithProvider:(*void)arg0 ;
-(void)_screenOrientationDidChange;
-(void)dealloc;


@end


#endif
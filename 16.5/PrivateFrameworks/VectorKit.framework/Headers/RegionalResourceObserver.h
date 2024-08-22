// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REGIONALRESOURCEOBSERVER_H
#define REGIONALRESOURCEOBSERVER_H


#import <Foundation/Foundation.h>


@interface RegionalResourceObserver : NSObject {
    *void _resourceProvider;
    mutex _resourceProviderLock;
    id *_observer;
}




-(id)initWithResourceProvider:(*void)arg0 ;
-(void)clearProvider;


@end


#endif
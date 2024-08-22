// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBGEOLOCATION_H
#define WEBGEOLOCATION_H

@class WebGeolocationPrivate;

#import <Foundation/Foundation.h>


@interface WebGeolocation : NSObject {
    WebGeolocationPrivate *_private;
}




-(id)_initWithWebCoreGeolocation:(*void)arg0 ;
-(void)dealloc;
-(void)setIsAllowed:(BOOL)arg0 ;


@end


#endif
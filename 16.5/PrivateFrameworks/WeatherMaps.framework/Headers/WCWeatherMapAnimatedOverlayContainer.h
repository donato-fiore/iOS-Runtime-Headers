// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WCWEATHERMAPANIMATEDOVERLAYCONTAINER_H
#define WCWEATHERMAPANIMATEDOVERLAYCONTAINER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WCWeatherMapAnimatedOverlayContainer : NSObject

@property (readonly, nonatomic) NSUInteger frameCount;
@property (retain, nonatomic) NSArray *frames; // ivar: _frames


-(id)copyFramesFromArchiveData:(id)arg0 error:(*id)arg1 ;
-(id)frameAtIndex:(NSUInteger)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;


@end


#endif
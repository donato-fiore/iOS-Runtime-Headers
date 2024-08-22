// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDCONTENTPATH_H
#define TSDCONTENTPATH_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TSDContentPath : NSObject

@property (copy, nonatomic) NSArray *contentLocations; // ivar: _contentLocations


+(id)contentPathWithLocations:(id)arg0 ;
-(id)contentLocationAtTime:(CGFloat)arg0 withTimingFunction:(id)arg1 ;
-(void)dealloc;


@end


#endif
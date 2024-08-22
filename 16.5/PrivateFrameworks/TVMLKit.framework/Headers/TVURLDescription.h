// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVURLDESCRIPTION_H
#define TVURLDESCRIPTION_H

@class NSString;


#import "TVViewDescription.h"

@interface TVURLDescription : TVViewDescription

@property (nonatomic) BOOL centerGrowth; // ivar: _centerGrowth
@property (retain, nonatomic) NSString *cropCode; // ivar: _cropCode
@property (nonatomic) CGFloat focusSizeIncrease; // ivar: _focusSizeIncrease
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (retain, nonatomic) NSString *url; // ivar: _url
@property (retain, nonatomic) NSString *urlFormat; // ivar: _urlFormat


-(id)initUrlWithProperties:(id)arg0 imageSize:(struct CGSize )arg1 focusSizeIncrease:(CGFloat)arg2 cropCode:(id)arg3 urlFormat:(id)arg4 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVPBUMPERCONFIG_H
#define TVPBUMPERCONFIG_H

@class NSAttributedString, UIImage;
@protocol TVPMediaItem;

#import <Foundation/Foundation.h>


@interface TVPBumperConfig : NSObject

@property (retain, nonatomic) NSAttributedString *attributedAppleIDText; // ivar: _attributedAppleIDText
@property (retain, nonatomic) NSAttributedString *attributedWarningText; // ivar: _attributedWarningText
@property (retain, nonatomic) UIImage *logoImage; // ivar: _logoImage
@property (nonatomic) CGFloat maxTextWidth; // ivar: _maxTextWidth
@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // ivar: _mediaItem
@property (nonatomic) CGFloat textDwellTime; // ivar: _textDwellTime


-(id)init;


@end


#endif
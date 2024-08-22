// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMASTICKER_H
#define IMASTICKER_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface IMASticker : NSObject

@property (readonly, copy, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (readonly, copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, copy, nonatomic) NSString *stickerName; // ivar: _stickerName


+(CGFloat)screenScale;
-(id)initWithFileURL:(id)arg0 stickerName:(id)arg1 accessibilityLabel:(id)arg2 ;


@end


#endif
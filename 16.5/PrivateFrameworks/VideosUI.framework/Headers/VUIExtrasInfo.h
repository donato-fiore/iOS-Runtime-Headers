// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIEXTRASINFO_H
#define VUIEXTRASINFO_H

@class NSDictionary, NSString, NSNumber, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUIExtrasInfo : NSObject <NSCopying>

 {
    NSDictionary *_extrasDict;
}


@property (retain, nonatomic) NSString *actionParams;
@property (readonly, nonatomic) NSString *adamID;
@property (readonly, nonatomic) NSNumber *contentRating;
@property (readonly, nonatomic) NSString *extrasURLString;
@property (readonly, nonatomic) BOOL isEntitledToPlay;
@property (readonly, nonatomic) BOOL isLightTheme;
@property (readonly, nonatomic) NSString *loadingImage;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *previewURLString;
@property (readonly, nonatomic) NSURL *tvAppDeeplinkURL;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithMediaItem:(id)arg0 ;


@end


#endif
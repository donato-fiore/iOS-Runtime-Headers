// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTMEDIAPLAYERITEM_H
#define SUSCRIPTMEDIAPLAYERITEM_H

@class NSString, NSNumber;


#import "SUScriptObject.h"
#import "SUMediaPlayerItem.h"

@interface SUScriptMediaPlayerItem : SUScriptObject {
    SUMediaPlayerItem *_mediaItem;
}


@property (copy) NSString *URL;
@property (copy) NSString *backgroundImageURL;
@property (copy) NSString *bookmarkIdentifier;
@property (copy) NSString *initialOrientation;
@property (retain) NSNumber *itemIdentifier;
@property (copy) NSString *itemType;
@property (retain) NSNumber *playableDuration;
@property (copy) NSString *subtitle;
@property (copy) NSString *title;


+(id)webScriptNameForKey:(char *)arg0 ;
-(id)_className;
-(id)attributeKeys;
-(id)copyNativeMediaPlayerItem;
-(id)initWithDictionary:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)dealloc;


@end


#endif
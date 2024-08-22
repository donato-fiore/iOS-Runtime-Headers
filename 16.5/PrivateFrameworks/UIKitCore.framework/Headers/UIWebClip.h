// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWEBCLIP_H
#define UIWEBCLIP_H

@class NSMutableData, NSURLConnection, NSUserActivity, NSString, NSURL, NSArray;
@protocol WebClipDelegate;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface UIWebClip : NSObject {
    NSUInteger currentIconIndex;
    UIImage *iconImage;
    NSMutableData *_customIconData;
    NSURLConnection *_iconConnection;
    NSMutableData *_customStartupImageData;
    NSURLConnection *_startupImageConnection;
    NSMutableData *_customStartupLandscapeImageData;
    NSURLConnection *_startupLandscapeImageConnection;
}


@property (readonly, nonatomic) NSUserActivity *appClipUserActivity;
@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: applicationBundleIdentifier
@property (readonly, nonatomic) NSURL *applicationLaunchURL;
@property (readonly, nonatomic) NSUInteger bundleVersion; // ivar: bundleVersion
@property BOOL classicMode; // ivar: classicMode
@property BOOL configurationIsManaged; // ivar: _configurationIsManaged
@property NSUInteger contentMode; // ivar: _contentMode
@property (weak, nonatomic) NSObject<WebClipDelegate> *delegate; // ivar: delegate
@property BOOL fullScreen; // ivar: fullScreen
@property (readonly, retain, nonatomic) UIImage *iconImage;
@property (readonly) NSString *iconImagePath;
@property (readonly) BOOL iconIsPrecomposed; // ivar: iconIsPrecomposed
@property (readonly) BOOL iconIsPrerendered; // ivar: iconIsPrerendered
@property (readonly) BOOL iconIsScreenShotBased; // ivar: iconIsScreenShotBased
@property (retain) NSArray *icons; // ivar: icons
@property (copy) NSString *identifier; // ivar: identifier
@property BOOL ignoreManifestScope; // ivar: _ignoreManifestScope
@property (retain, nonatomic) UIImage *initialLaunchImage; // ivar: initialLaunchImage
@property BOOL isAppClip; // ivar: _isAppClip
@property (copy, nonatomic) NSURL *manifestId; // ivar: manifestId
@property (retain, nonatomic) NSURL *pageURL; // ivar: pageURL
@property (copy, nonatomic) NSString *placeholderBundleIdentifier; // ivar: placeholderBundleIdentifier
@property BOOL removalDisallowed; // ivar: removalDisallowed
@property BOOL scenelessBackgroundLaunch; // ivar: _scenelessBackgroundLaunch
@property (copy, nonatomic) NSString *shortcutIdentifier; // ivar: _shortcutIdentifier
@property (retain, nonatomic) UIImage *startupImage; // ivar: startupImage
@property (retain) NSURL *startupImageURL; // ivar: startupImageURL
@property (retain, nonatomic) UIImage *startupLandscapeImage; // ivar: startupLandscapeImage
@property (retain) NSURL *startupLandscapeImageURL; // ivar: startupLandscapeImageURL
@property NSInteger statusBarStyle; // ivar: statusBarStyle
@property NSUInteger supportedOrientations; // ivar: supportedOrientations
@property (copy, nonatomic) NSString *title; // ivar: title
@property (nonatomic) NSUInteger webClipStatusBarStyle; // ivar: _webClipStatusBarStyle


+(BOOL)_webClipFullScreenValueForMetaTagContent:(id)arg0 ;
+(BOOL)bundleIdentifierContainsWebClipIdentifier:(id)arg0 ;
+(BOOL)webClipClassicModeValueForWebDocumentView:(id)arg0 ;
+(BOOL)webClipFullScreenValueForWebDocumentView:(id)arg0 ;
+(NSInteger)_webClipStatusBarStyleForMetaTagContent:(id)arg0 ;
+(NSInteger)webClipStatusBarStyleForWebDocumentView:(id)arg0 ;
+(NSUInteger)_webClipOrientationsForMetaTagContent:(id)arg0 ;
+(NSUInteger)webClipOrientationsForWebDocumentView:(id)arg0 ;
+(id)_contentForMetaName:(id)arg0 inWebDocumentView:(id)arg1 ;
+(id)_normalizedWebClipIdentifierFromBundleIdentifier:(id)arg0 ;
+(id)_webClipLinkTagsFromWebDocumentView:(id)arg0 ;
+(id)appClips;
+(id)clipsIncludingWebClips:(BOOL)arg0 includingAppClips:(BOOL)arg1 ;
+(id)pathForWebClipCacheWithIdentifier:(id)arg0 ;
+(id)pathForWebClipStorageWithIdentifier:(id)arg0 ;
+(id)pathForWebClipWithIdentifier:(id)arg0 ;
+(id)urlForWebClipWithIdentifier:(id)arg0 ;
+(id)webClipIconsForWebClipLinkTags:(id)arg0 pageURL:(id)arg1 ;
+(id)webClipIconsForWebDocumentView:(id)arg0 ;
+(id)webClipIdentifierFromBundleIdentifier:(id)arg0 ;
+(id)webClipTitleForWebDocumentView:(id)arg0 ;
+(id)webClipWithIdentifier:(id)arg0 ;
+(id)webClipWithURL:(id)arg0 ;
+(id)webClips;
+(id)webClipsDirectoryPath;
-(BOOL)_createApplicationRecord;
-(BOOL)_requiresPlaceholderBundle;
-(BOOL)_writeImage:(id)arg0 toDiskWithFileName:(id)arg1 ;
-(BOOL)createOnDisk;
-(BOOL)ensurePlaceholderBundle;
-(BOOL)removeFromDisk;
-(BOOL)tryLoadingNextCustomIcon;
-(BOOL)updateOnDisk;
-(id)_bundleImageWithName:(id)arg0 ;
-(id)_bundleResourceWithName:(id)arg0 ;
-(id)_createPlaceholderBundleIdentifier;
-(id)_info;
-(id)_initWithIdentifier:(id)arg0 ;
-(id)_launchURLWithScheme:(id)arg0 ;
-(id)bundleIdentifier;
-(id)generateIconImageForFormat:(int)arg0 scale:(CGFloat)arg1 ;
-(id)getStartupImage:(NSInteger)arg0 ;
-(void)_readPropertiesFromBundle:(id)arg0 ;
-(void)_reloadProperties;
-(void)cancelMediaUpdate;
-(void)configureWithMetaTags:(id)arg0 linkTags:(id)arg1 ;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)coordinator:(id)arg0 canceledWithReason:(id)arg1 client:(NSUInteger)arg2 ;
-(void)coordinatorDidCompleteSuccessfully:(id)arg0 forApplicationRecord:(id)arg1 ;
-(void)dealloc;
-(void)requestCustomIconUpdate;
-(void)requestCustomLandscapeStartupImageUpdate;
-(void)requestCustomPortraitStartupImageUpdate;
-(void)requestIconUpdateInSpringBoard;
-(void)stopLoadingCustomIcon;
-(void)stopLoadingStartupImage;
-(void)stopLoadingStartupLandscapeImage;
-(void)updateCustomMediaLocationsFromWebDocumentView:(id)arg0 ;
-(void)updateCustomMediaLocationsWithWebClipLinkTags:(id)arg0 baseURL:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSABASEAPPLICATIONDELEGATE_H
#define TSABASEAPPLICATIONDELEGATE_H

@class TSWPApplicationDelegate;
@protocol TSADownloadDelegate;


#import "TSADocumentRoot.h"

@interface TSABaseApplicationDelegate : TSWPApplicationDelegate

@property (weak, nonatomic) TSADocumentRoot *documentRoot; // ivar: mDocumentRoot
@property (retain, nonatomic) NSObject<TSADownloadDelegate> *downloadDelegate; // ivar: _downloadDelegate
@property (readonly, nonatomic) CGFloat maximumAspectRatioForPreviewImage;
@property (readonly, nonatomic) CGFloat mimimumAspectRatioForPreviewImage;


+(id)sharedDelegate;
+(id)tsa_sharedICloudPreferences;
+(id)tsa_sharedPropertiesProvider;
+(void)resetSharedConfigurations;
-(BOOL)hasApplicationBadgeCount;
-(BOOL)openURL:(id)arg0 displayAlertOnError:(BOOL)arg1 ;
-(Class)iCloudPreferencesProviderClass;
-(id)existingNestedDocumentPathForPath:(id)arg0 ;
-(id)iCloudURLFromDocumentShareURLComponents:(id)arg0 ;
-(id)init;
-(void)persistenceError:(id)arg0 ;
-(void)registerDefaults;
-(void)registerDrawableInfoClassMapping;
-(void)registerSOSClassTypeMappings;
-(void)setApplicationBadgeCount:(NSUInteger)arg0 forCategory:(id)arg1 ;


@end


#endif
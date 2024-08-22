// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBBASEPLUGINPACKAGE_H
#define WEBBASEPLUGINPACKAGE_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface WebBasePluginPackage : NSObject {
    NSMutableSet *pluginDatabases;
    String path;
    PluginInfo pluginInfo;
    RetainPtr<__CFBundle *> cfBundle;
    *unk BP_CreatePluginMIMETypesPreferences;
}




+(id)pluginWithPath:(id)arg0 ;
+(void)initialize;
-(*void)path;
-(*void)pluginInfo;
-(BOOL)getPluginInfoFromPLists;
-(BOOL)isJavaPlugIn;
-(BOOL)isNativeLibraryData:(id)arg0 ;
-(BOOL)isQuickTimePlugIn;
-(BOOL)load;
-(BOOL)supportsExtension:(*void)arg0 ;
-(BOOL)supportsMIMEType:(*void)arg0 ;
-(id)MIMETypeForExtension:(*void)arg0 ;
-(id)_objectForInfoDictionaryKey:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)pListForPath:(id)arg0 createFile:(BOOL)arg1 ;
-(struct String )bundleIdentifier;
-(struct String )bundleVersion;
-(unsigned int)versionNumber;
-(void)createPropertyListFile;
-(void)dealloc;
-(void)unload;
-(void)wasAddedToPluginDatabase:(id)arg0 ;
-(void)wasRemovedFromPluginDatabase:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBPLUGINPACKAGE_H
#define WEBPLUGINPACKAGE_H

@class NSBundle;


#import "WebBasePluginPackage.h"

@interface WebPluginPackage : WebBasePluginPackage {
    NSBundle *nsBundle;
}




-(BOOL)load;
-(Class)viewFactory;
-(id)bundle;
-(id)initWithPath:(id)arg0 ;
-(void)dealloc;


@end


#endif
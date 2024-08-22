// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFBLOCKPAGE_H
#define WFBLOCKPAGE_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface WFBlockPage : NSObject {
    NSString *preferredLanguage;
}


@property (retain) NSString *formActionURLString; // ivar: formActionURLString
@property (readonly) NSURL *pageTemplateURL; // ivar: pageTemplateURL
@property (retain) NSString *userVisibleURLString; // ivar: userVisibleURLString


-(id)_blockpage;
-(id)_css;
-(id)_fileContentWithName:(id)arg0 extension:(id)arg1 ;
-(id)_initWithUsername:(id)arg0 fileName:(id)arg1 ;
-(id)initNoOveridePageWithUsername:(id)arg0 ;
-(id)initWithUsername:(id)arg0 overridesAllowded:(BOOL)arg1 ;
-(id)page;
-(void)dealloc;


@end


#endif
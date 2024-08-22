// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWHITELISTSITEBUFFER_H
#define WFWHITELISTSITEBUFFER_H

@class NSMutableDictionary, WCRURLList;

#import <Foundation/Foundation.h>


@interface WFWhitelistSiteBuffer : NSObject

@property NSUInteger maxSize; // ivar: _maxSize
@property (retain) NSMutableDictionary *siteTree; // ivar: _siteTree
@property (retain) WCRURLList *urlList; // ivar: _urlList


-(BOOL)containsURLString:(id)arg0 ;
-(BOOL)treeContainsURLString:(id)arg0 ;
-(id)init;
-(void)addURLString:(id)arg0 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSIDENTITYPROVIDERTABLEVIEWDATASOURCE_H
#define VSIDENTITYPROVIDERTABLEVIEWDATASOURCE_H

@class NSString, NSDictionary, NSArray, UITableView;
@protocol UITableViewDataSource;

#import <Foundation/Foundation.h>


@interface VSIdentityProviderTableViewDataSource : NSObject <UITableViewDataSource>



@property (nonatomic) NSUInteger additionalProvidersMode; // ivar: _additionalProvidersMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *destinationsBySectionIndexTitle; // ivar: _destinationsBySectionIndexTitle
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *identityProviders; // ivar: _identityProviders
@property (copy, nonatomic) NSArray *providerSections; // ivar: _providerSections
@property (nonatomic) NSString *requestedStorefrontCountryCode; // ivar: _requestedStorefrontCountryCode
@property (copy, nonatomic) NSArray *storefrontSections; // ivar: _storefrontSections
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (copy, nonatomic) NSArray *tvProviderSupportedStorefronts; // ivar: _tvProviderSupportedStorefronts


-(BOOL)hasStorefrontOrIdentityProviderAtIndexPath:(id)arg0 ;
-(NSInteger)_cellStyleForRowAtIndexPath:(id)arg0 ;
-(NSInteger)_textAlignmentForRowAtIndexPath:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_minimumProviderCountForIndexes;
-(id)_additionalProvidersRowTitle;
-(id)_cellReuseIdentifierForRowAtIndexPath:(id)arg0 ;
-(id)_textColorForRowAtIndexPath:(id)arg0 ;
-(id)_titleForRowAtIndexPath:(id)arg0 ;
-(id)identityProviderForRowAtIndexPath:(id)arg0 ;
-(id)init;
-(id)sectionIndexTitlesForTableView:(id)arg0 ;
-(id)storefrontAtIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 indexPathForSectionIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(void)_scrollToTableHeaderView;
-(void)setNumberOfLinesForCell:(id)arg0 atIndexPath:(id)arg1 ;


@end


#endif
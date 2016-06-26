//
//  RWTSearchResultsViewModel.h
//  RWTFlickrSearch
//
//  Created by Dxue on 16/6/25.
//  Copyright © 2016年 Colin Eberhardt. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "RWTViewModelServices.h"
#import "RWTFlickrSearchResults.h"

@interface RWTSearchResultsViewModel : NSObject

- (instancetype)initWithSearchResults:(RWTFlickrSearchResults *)results services:(id<RWTViewModelServices>)services;

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSArray *searchResults;

@end

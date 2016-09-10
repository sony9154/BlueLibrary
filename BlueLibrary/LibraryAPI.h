//
//  LibraryAPI.h
//  BlueLibrary
//
//  Created by Peter Yo on 9月/10/16.
//  Copyright © 2016年 Eli Ganem. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Album.h"

@interface LibraryAPI : NSObject
+ (LibraryAPI*)sharedInstance;

- (NSArray*)getAlbums;
- (void)addAlbum:(Album*)album atIndex:(int)index;
- (void)deleteAlbumAtIndex:(int)index;
@end

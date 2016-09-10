//
//  Album.h
//  BlueLibrary
//
//  Created by Peter Yo on 9月/10/16.
//  Copyright © 2016年 Eli Ganem. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Album : NSObject

@property (nonatomic, copy, readonly) NSString *title, *artist, *genre, *coverUrl, *year;

- (id)initWithTitle:(NSString*)title artist:(NSString*)artist coverUrl:(NSString*)coverUrl year:(NSString*)year;

@end
